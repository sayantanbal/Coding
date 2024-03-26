# functionality: 1. List all   videos
#                2. Add a   video
#                3. Update a   video details
#                4. Delete a   video
#                5. Exit the app

# 1. List all   videos -> we will use a list to store the videos
# 2. Add a   video -> videos list gets updated. it takes video name and time duration as an input
# 3. Update a   video details -> it takes video index number to update, new video name and time duration as an input
# 4. Delete a   video -> it takes video index number to delete
# 5. Exit the app -> break the loop


# as we need to continuously run the same methods, we will use a while loop; if the user wants to exit, we will break the loop


# we are defining a main method, which will be called when the script is run
# we are storing the videos in a txt file, so we need to load the data from the file. how can we do it? json be like - "hold my beer" lol.


# 1st we need to check if the txt file exists or not. if it does, we need to load the data from the file. if it doesn't, we need to create an empty list to store the videos.

# we need to define the following methods:
# 1. list_videos(videos)
# 2. add_video(videos)
# 3. update_video(videos)
# 4. delete_video(videos)
# 5. save_data(videos)
# 6. load_data()


# here we are trying to open the file youtube.txt, if it exists, we are loading the data from the file and returning it. if the file doesn't exist, we are returning an empty list.


import json


def load_data(txt_file):
    print(txt_file)
    try:
        with open(txt_file) as file:
            return json.load(file)
    except FileNotFoundError:
        return []


def list_videos(videos):
    if (videos != []):
        for index, video in enumerate(videos, start=1):
            print(f"{index}. {video['name']}, Duration: {video['time']} ")
    else:
        print("\n \n No videos available. please add videos. \n \n ")


def save_data(videos, txt_file):
    with open(txt_file, 'w') as file:
        json.dump(videos, file)


def add_video(videos, txt_file):
    name = input("enter video name: ")
    time = int(input("enter video time: "))
    videos.append({'name': name, 'time': time})
    save_data(videos, txt_file)


def delete_video(videos, txt_file):
    list_videos(videos)
    index = int(input("enter the video number to be deleted: "))
    if 1 <= index <= len(videos):
        del videos[index-1]
        save_data(videos, txt_file)
    else:
        print("invalid video index selected. ")


def update_video(videos, txt_file):
    list_videos(videos)
    index = int(input("enter the video number to update: "))
    if 1 <= index <= len(videos):
        name = input("enter the new video name: ")
        time = input("enter the new video time: ")
        videos[index-1] = {'name': name, 'time': time}
        save_data(videos, txt_file)
    else:
        print("invalid index selected. ")


def main():
    while True:
        txt_file = "videos.txt"
        videos = load_data(txt_file)
        print("1. List all videos ")
        print("2. Add a video ")
        print("3. Update a video details ")
        print("4. Delete a video ")
        print("5. Exit the app ")

        choice = input("Enter your choice: ")

        if choice == "1":
            list_videos(videos)
        elif choice == "2":
            add_video(videos, txt_file)
        elif choice == "3":
            update_video(videos, txt_file)
        elif choice == "4":
            delete_video(videos, txt_file)
        elif choice == "5":
            break
        else:
            print("Invalid choice. Please try again.")
            continue


if __name__ == "__main__":
    main()
