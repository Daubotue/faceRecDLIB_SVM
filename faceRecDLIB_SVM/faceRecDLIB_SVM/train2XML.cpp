//#include<opencv2\opencv.hpp> 
//#include<string>
//#include<fstream>    
//using namespace std;
//using namespace cv;
//using namespace cv::ml;
//
//
//void readData(float arr[150][136], int start, string directory);
//
//int main()
//{
//
//	float fArr[150][136];
//
//	readData(fArr, 0, "peace");
//	readData(fArr, 50, "happy");
//	readData(fArr, 100, "annoyed");
//	int faceLabels[150];
//	for (int i = 0; i < 50; i++) 
//	{
//		faceLabels[i] = 170;
//		faceLabels[i+50] = 250;
//		faceLabels[i + 100] = 300;
//	}
//
//	//转为Mat以调用
//	Mat trainMat(150, 136, CV_32FC1, fArr);//这边数据类型要处理好，不然粗事儿
//	Mat labels(150, 1, CV_32SC1, faceLabels);
//	//训练的初始化
//	Ptr<SVM> svm = SVM::create();
//	svm->setType(SVM::C_SVC);
//	svm->setKernel(SVM::LINEAR);
//	svm->setTermCriteria(TermCriteria(TermCriteria::MAX_ITER, 100, 1e-6));
//	//开始训练
//	svm->train(trainMat, ROW_SAMPLE, labels);
//	svm->save("SVM_DATA.xml");
//}
//
//void readData(float arr[150][136], int start, string directory)
//{
//	fstream fin;
//	//  fin.imbue(std::locale("chs")); 
//
//
//	for (int i = 0; i < 50; i++)
//	{
//		fin.open("..\\" + directory +"\\"+ to_string(i+1) + ".txt");
//		for (int j = 0; j < 136; j++) 
//		{
//			string str;
//			fin >> str;	
//			arr[i+start][j] = atof(str.c_str());
//
//		}
//		fin.close();//关闭是个好习惯 
//	}
//
//}