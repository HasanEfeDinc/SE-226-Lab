import cv2
import numpy as np

img = cv2.imread('image.jpg')

b, g, r = cv2.split(img)

cv2.imshow('Blue', b)

cv2.imshow('Green', g)

cv2.imshow('Red', r)

g = np.zeros_like(g)

img_no_green = cv2.merge((b, g, r))
cv2.imshow('No Green', img_no_green)
cv2.waitKey(0)
cv2.destroyAllWindows()