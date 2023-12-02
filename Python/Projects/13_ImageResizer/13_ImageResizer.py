# resize an image by user given size using opencv

import cv2

img = cv2.imread('Python/Projects/wallpaper.jpg')

print('Original Dimensions : ',img.shape)

scale_percent = int(input('Enter the percentage of original size: '))
width = int(img.shape[1] * scale_percent / 100)
height = int(img.shape[0] * scale_percent / 100)
dim = (width, height)

resized = cv2.resize(img, dim, interpolation = cv2.INTER_AREA)

print('Resized Dimensions : ',resized.shape)

cv2.imshow("Resized image", resized)
cv2.imwrite("Python/Projects/resized.jpg", resized)
cv2.waitKey(0)
cv2.destroyAllWindows()

# Output:
# Original Dimensions :  (1280, 720, 3)
# Enter the percentage of original size: 50
# Resized Dimensions :  (360, 640, 3)
# Press any key to close the image window...