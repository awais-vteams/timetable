#include <iostream>
#include <string.h>
#include <fstream>
#include <stdlib.h>
#include <time.h>

using namespace std;


struct Subjects {
	char name[50];
	char teacher_name[50];
};


int randomIndex(int no_of_subjects) {
	
	int rand_index = rand() % no_of_subjects;
	
	return rand_index;
}

int getSlotIndex(int no_of_subjects, int temp_week_sub[], int temp_week_labs[]) {
	int index = randomIndex(no_of_subjects);
	
}

int main()
{
	int no_of_subjects;
	int class_hour = 1;
	int class_per_day = 3;
	int labs_per_subject = 3;
	
	cout<<"---------------------------\n";
	cout<<"-------- Timetable --------\n";
	cout<<"---------------------------\n\n";
	
	cout<<"Enter the number of subjects: ";
	cin>>no_of_subjects;
	
	struct Subjects subject[no_of_subjects];
	string days[5] = {"Monday","Tuesday","Wednesday","Thursday","Friday"};
	

	for(int i = 0; i < no_of_subjects; i++) {
		cout<<"Enter the subject "<<i+1<<" name: ";
		cin>>subject[i].name;

		cout<<"Enter the subject '"<<subject[i].name<<"' teacher name: ";
		cin>>subject[i].teacher_name;
		cout<<"\n";
	}
	
	
	ofstream timetable("timetable.csv");
	
	// Write the header
	timetable << ",";
	for(int hour = 8; hour < 16; hour += class_hour) {
		timetable<<"'"<<hour<<" - "<<hour+1<<"',";
	}
	timetable << "\n";
	
	int temp_week_sub[no_of_subjects];
	int temp_week_labs[no_of_subjects];
	
	for(int i = 0; i < no_of_subjects; i ++) {
		temp_week_sub[i] = 0;
		temp_week_labs[i] = 0;
	}
	
	srand ( time(NULL) );
		
	for(int j = 0; j < 5; j++) {
		timetable<<days[j]<<",";
		
		for(int hour = 8; hour < 16; hour += class_hour) {
			
			
		}
		
		timetable << "\n";
	}

	timetable.close();
	
	return 0;
}

