#导入cv模块
#import cv2 as cv
#读取图像，支持 bmp、jpg、png、tiff 等常用格式
#img = cv.imread("D:\\picture\\318394.jpg")
#输出OpenCV的版本号
#print(cv.__version__)
#创建窗口并显示图像
#cv.namedWindow("Image")
#cv.imshow("Image",img)
#cv.waitKey(0)
#释放窗口
#cv.destroyAllWindows()

"""
import cv2
filepath = "D:\\picture\\318394.jpg"
img = cv2.imread(filepath) # 读取图片
gray = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY) # 转换灰色
# OpenCV人脸识别分类器
classifier = cv2.CascadeClassifier( "D:\openvc\haarcascade_frontalface_default.xml" )
color = (0, 255, 0) # 定义绘制颜色
# 调用识别人脸
faceRects = classifier.detectMultiScale( gray, scaleFactor=1.2, minNeighbors=3, minSize=(32, 32))
if len(faceRects): # 大于0则检测到人脸
    for faceRect in faceRects: # 单独框出每一张人脸
        x, y, w, h = faceRect
        # 框出人脸
        cv2.rectangle(img, (x, y), (x + h, y + w), color, 2)
        # 左眼
        cv2.circle(img, (x + w // 4, y + h // 4 + 30), min(w // 8, h // 8), color)
        #右眼
        cv2.circle(img, (x + 3 * w // 4, y + h // 4 + 30), min(w // 8, h // 8), color)
        #嘴巴
        cv2.rectangle(img, (x + 3 * w // 8, y + 3 * h // 4), (x + 5 * w // 8, y + 7 * h // 8), color)
cv2.imshow("image", img) # 显示图像
c = cv2.waitKey(10)
cv2.waitKey(0)
cv2.destroyAllWindows()
"""






