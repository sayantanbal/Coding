# if __name__ == '__main__':
#     n = int(input())

#     student_marks = {}
#     for _ in range(n):
#         name, *line = input().split()
#         scores = list(map(float, line))
#         student_marks[name] = scores
#     # query_name = input()

#     # result = sum(student_marks[query_name])/len(student_marks[query_name])


#     # formatted_result = '{:.2f}'.format(result)
#     # print(formatted_result)


# from pytube import Playlist
# playlist = Playlist("https://youtube.com/playlist?list=PLu0W_9lII9aikXkRE0WxDt1vozo3hnmtR&si=P_wRmu3uoL4mVBO0")

# print(f"tottal videos are {len(playlist.video_urls)}")

# for video in playlist.videos :
#     print(video.streams.filter(file_extension="mp4"))
#     # video.streams.first().download("D:\PHP Harry")


# # from pytube import YouTube
# x = 3

# print(type(x))
# x = 10
# y = 10
# print(x, y)

# x = 11
# print(x, y)
# import copy

# l1 = [1,2,3, [10,12, [199,299]]]
# l2 = l1[:]
# l3 = copy.copy(l1)
# # print(l2, l3)

# l2[0] = 14
# repr(l2)


x = 2
y = 3
z = 4

print(z > y > x)
