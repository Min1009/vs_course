#pragma once

#include<string.h>
#include<memory.h>

// typedef�����ض���
typedef struct  {
	char number[15];
	char name[10 * 2];
	char gender;	// {'M', 'F'}
	char address[256];

	// scores
	double math;
	double english;
	double chinese;
	
	double average;

	// POI
	//double longitude;
	//double latitude;

	//char bank_number[20];	
	//char bank_number_bak[20];
} Student;

void initialize_students(Student* students, int n)
{
	int i = 0;
	students = (Student*)malloc(sizeof(Student) * n);
	for (i = 0; i < n; i++)
	{
		memset(&students[i], 0, sizeof(Student));
	}

	// ��θ��ṹ�帳��ֵ
	strcpy(students[0].name, "first");
	strcpy(students[0].number, "2019710001");

	// �ṹ�������ε���
	printf("%s\t%s\n", students[0].name, students[0].number);
}

void amend_gender(Student *p, char target_gender)
{
	p->gender = target_gender;
}

void average_scores(Student *p)
{
	p->average = (p->math + p->english + p->chinese) / 3.0;
}

void print_a_student(Student *p)
{
	// printf("%s\t%s\t%c\n", p->name, p->number, p->gender);
	printf("%.2lf\t%.2lf\t%.2lf\t%.2lf\n", p->math, p->english, p->chinese, p->average);
}
