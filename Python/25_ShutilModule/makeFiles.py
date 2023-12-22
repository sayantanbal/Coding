import shutil

def copy_folder(src_folder, dest_folder):
    try:
        shutil.copytree(src_folder, dest_folder)
        print(f"Folder '{src_folder}' successfully copied to '{dest_folder}'.")
    except shutil.Error as e:
        print(f"Error copying folder: {e}")
    except Exception as e:
        print(f"An unexpected error occurred: {e}")

# Example usage

list = ['BMICalculator','DigitalClock', 'GuessTheNumber','keyboard', 'unlimitedColors', 'scroll', 'typer', 'mouseCircle', 'emoji', 'textEditor', 'randomImage', 'jokes' , 'cats', 'crudDom', 'debounce']

for (i,j) in zip(list, range(2, len(list))):
    source_folder = f'/home/sayantan/Desktop/Coding/JavaScript/07_ProjectsOnDOM/01_ColorChanger'
    if (j < 10):
        destination_folder = f'/home/sayantan/Desktop/Coding/JavaScript/07_ProjectsOnDOM/0{j}_{i}'
    else:
        destination_folder = f'/home/sayantan/Desktop/Coding/JavaScript/07_ProjectsOnDOM/{j}_{i}'
    copy_folder(source_folder, destination_folder)