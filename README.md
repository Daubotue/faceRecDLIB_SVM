# faceRecDLIB_SVM
dlib+svm+人脸识别

框架：（训练模块+测试模块）

1.训练：
    1）Dlib中get_frontal_face_detector()提取特征点并进行归一化，特征维度136维，按照编号以TXT存储。（collectFeatures.cpp）
    2）利用SVM分类器进行分类，训练成XML（train2XML.cpp）
2.测试：
    使用训练好的XML，对当前图像进行预测。

文件说明：
1.happy文件夹：happy特征数据
2.peace文件夹：peace特征数据
3.annoyed文件夹：annoyed特征数据
4.shape_predictor_68_face_landmarks.dat：68个预训练特征模型
5.SVM_DATA.xml：训练后的SVM模型