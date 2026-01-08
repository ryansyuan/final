#include <stdio.h>
#include <stdlib.h>

typedef struct _studnet
{
	char name[5];
	int chinese;
	int english;
	int math;
	int sum;
	float avg;
}student;

int main(void)
{
	student data[5];
	FILE *stream1;
	FILE *stream2;
	int i;
	stream1 = fopen("./gradedata.txt", "r");
	stream2 = fopen("./gradeoutput.txt", "w");

	if (stream1 == NULL || stream2 == NULL)
	{
		printf("檔案開啟失敗");
	}
	else
	{
		fprintf(stream2, "姓名\t國文\t英文\t數學\t總合\t平均\n");
		for (i = 0; i < 5; i++)
		{
			fscanf(stream1, "%s", data[i].name);
			fscanf(stream1, "%d", &data[i].chinese);
			fscanf(stream1, "%d", &data[i].english);
			fscanf(stream1, "%d", &data[i].math);


			data[i].sum = data[i].chinese + data[i].english + data[i].math;
			data[i].avg = data[i].sum / 3.0;
			fprintf(stream2, "%s\t%d\t%d\t%d\t%d\t%.2f\n",
				data[i].name, data[i].chinese, data[i].english,
				data[i].math, data[i].sum, data[i].avg);
		}
		fclose(stream1);
		fclose(stream2);
	}
	system("pause");
	return 0;
}
