
//#include <iostream>
//using namespace std;
//
//class student
//{
//private:
//	int id;
//	int score;
//public:
//	student(int id, int score)
//	{
//		this->id = id;
//		this->score = score;
//	}
//	student()
//	{
//
//	}
//	void max(student (*stu)[5])
//	{
//		for (int i = 0; i < 4; i++)
//		{
//			if (stu[i]->id < stu[i + 1]->id)
//				swap(*stu[i], *stu[i + 1]);
//		}
//		cout << "最高成绩者的学号是：" << stu[0];
//	}
//	void swap(student s1, student s2)
//	{
//		student s;
//		s=s1;
//		s1=s2;
//		s2=s;
//	}
//};
//
//int main()
//{
//	student students[5];
//	cout << "依次输入五个学生的学号和成绩：" << endl;
//	for (int j = 0; j < 5; j++)
//	{
//		int id, score;
//		cin >> id >> score;
//		students[j] = student(id, score);
//	}
//	students[0].max(&students);
//	return 0;
//}