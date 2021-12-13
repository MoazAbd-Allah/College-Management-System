#include <iostream>

using namespace std;


struct Student
{
    string department,name,course_name,GPA;
};
void Student_info(Student s[])
{
    for(int i=0;i<3;++i)
    {
        cout<<"Enter Student Number "<<i+1<<" "<<"Name :-"<<"\n";
        getline(cin,s[i].name);
        cout<<"Enter Student Number "<<i+1<<" "<<"Department :-"<<"\n";
        getline(cin,s[i].department);
        cout<<"Enter Student Number "<<i+1<<" "<<"Course Name :-"<<"\n";
        getline(cin,s[i].course_name);
        cout<<"Enter Number "<<i+1<<" "<<"GPA ="<<"\n";
        getline(cin,s[i].GPA);
    }



}
void selectionSort(Student s[]) //FROM A TO Z
{
    int mindex;

    for(int i=0;i<3-1;++i)
    {
        mindex=i;
        for(int j=i+1;j<3;++j)
        {
            if(s[i].name > s[j].name)
            {
                mindex=j;
            }

            swap(s[mindex].name,s[i].name);

        }

    }


}
void linner_serach_Name(Student s[],string key)
{

    for(int i=0;i<3;++i)
    {
        if(s[i].name==key)
        {
            cout<<"Found \n";
            break;
        }
        else
        {
            cout<<"Not Found \n";
            break;
        }

    }


}
void print_byname(Student s[])
{
    for(int i=0;i<3;++i)
    {
         cout<<"Student Number"<<i+1<<" Name:-     "<<s[i].name<<"\n";
    }



}
void BubbleSort(Student s[]) //FROM A TO Z
{
    	bool flag = true;
	for (int i = 0; i < 3 - 1; i++)
	{
		for (int j = 0; j < 3 - i - 1; j++)
		{
			if (s[j].department > s[j + 1].department)
			{
				swap(s[j].department, s[j + 1].department);
				flag=false;
			}

		}
		if (flag == true)
			break;

	}

}
void print_bydepartment(Student s[])
{

    for(int i=0;i<3;++i)
    {
         cout<<"Student Number"<<i+1<<" Department:-     "<<s[i].department<<"\n";
    }

}
void linner_serach_Department(Student s[],string key)
{

    for(int i=0;i<3;++i)
    {
        if(s[i].department==key)
        {
            cout<<"Found \n";
            break;
        }
        else
        {
            cout<<"Not Found \n";
            break;
        }

    }


}
void insertionSort(Student s[]) // From Z TO A
{


	string key;
	int j;
	for (int i = 1; i < 3; i++)
	{
		key = s[i].course_name;
		j = i - 1;

		while (j >= 0 && s[j].course_name < key)
		{
			s[j + 1].course_name = s[j].course_name;
			j = j - 1;
		}
		s[j + 1].course_name = key;
	}

}
void linner_serach_CourseName(Student s[],string key)
{
    for(int i=0;i<3;++i)
    {
        if(s[i].course_name==key)
        {
            cout<<"Found \n";
            break;
        }
        else
        {
            cout<<"Not Found \n";
            break;
        }

    }
}
void print_bycoursename(Student s[])
{
    for(int i=0;i<3;++i)
    {
         cout<<"Student Number"<<i+1<<" Course Name:-     "<<s[i].course_name<<"\n";
    }

}




int main()
{
    Student S[3];


 Student_info(S);
 selectionSort(S);
 print_byname(S);
 BubbleSort(S);
 print_bydepartment(S);
 insertionSort(S);
 print_bycoursename(S);
 linner_serach_Name(S,"Moaz");
 linner_serach_Department(S,"Moaz");

}































// cout<<"Student Number"<<i+1<<" Department:-     "<<s[i].department<<"\n";

         //cout<<"Student Number"<<i+1<<" Course Name:-     "<<s[i].course_name<<"\n";

        // cout<<"Student Number"<<i+1<<" GPA=     "<<s[i].GPA<<"\n";

