#include <mysql.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#pragma comment(lib,"libmysql.lib")
#define DB_HOST "127.0.0.1"
#define DB_USER "root"
#define DB_PASS "wlgns8040"
#define DB_NAME "temperature"
#define CHOP(x) x[strlen(x)-1]=""

int madeSearchConditon(int n, char a[700]) //Search ���� �����ϴ� �Լ�
{
	if (n == 1) {
		int i;
		sprintf(a,"%s","SELECT b.Days, a.City, b.Avg_Temperature, b.Low_Temperature, b.High_Temperature FROM Locate a INNER JOIN Weather b ON a.City_Number=b.Town");
		printf("-------------------------------------------------------------------------------------\n");
		printf("Do you need to enter ther condition?\n");
		printf("1 : Yes\n");
		printf("2 : No\n");
		scanf("%d", &i);
		
		if (i == 1) {
			char ex[100];
			sprintf(a,"%s%s",a, " WHERE ");
			printf("Write a condition\n(ex:a.City='�����̸�', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
			scanf("%s", ex);
			sprintf(a,"%s%s",a, ex);
			return a[700];
		}
		else return a[700];
	}
	else if (n == 2) {
		int i;
		sprintf(a, "%s", "SELECT b.Days, a.City, b.Avg_Temperature FROM Locate a INNER JOIN Weather b ON a.City_Number=b.Town");
		printf("-------------------------------------------------------------------------------------\n");
		printf("Do you need to enter ther condition?\n");
		printf("1 : Yes\n");
		printf("2 : No\n");
		scanf("%d", &i);

		if (i == 1) {
			char ex[100];
			sprintf(a, "%s%s", a, " WHERE ");
			printf("Write a condition\n(ex:a.City='�����̸�', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
			scanf("%s", ex);
			sprintf(a, "%s%s", a, ex);
			return a[700];
		}
		else return a[700];
	}
	else if (n == 3) {
		int i;
		sprintf(a, "%s", "SELECT b.Days, a.City, b.Low_Temperature FROM Locate a INNER JOIN Weather b ON a.City_Number=b.Town");
		printf("-------------------------------------------------------------------------------------\n");
		printf("Do you need to enter ther condition?\n");
		printf("1 : Yes\n");
		printf("2 : No\n");
		scanf("%d", &i);

		if (i == 1) {
			char ex[100];
			sprintf(a, "%s%s", a, " WHERE ");
			printf("Write a condition\n(ex:a.City='�����̸�', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
			scanf("%s", ex);
			sprintf(a, "%s%s", a, ex);
			return a[700];
		}
		else return a[700];
	}
	else if (n == 4) {
		int i;
		sprintf(a, "%s", "SELECT b.Days, a.City, b.High_Temperature FROM Locate a INNER JOIN Weather b ON a.City_Number=b.Town");
		printf("-------------------------------------------------------------------------------------\n");
		printf("Do you need to enter ther condition?\n");
		printf("1 : Yes\n");
		printf("2 : No\n");
		scanf("%d", &i);

		if (i == 1) {
			char ex[100];
			sprintf(a, "%s%s", a, " WHERE ");
			printf("Write a condition\n(ex:a.City='�����̸�', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
			scanf("%s", ex);
			sprintf(a, "%s%s", a, ex);
			return a[700];
		}
		else return a[700];
	}
	else if (n == 5) {
		int i;
		sprintf(a, "%s", "SELECT b.Days, a.City, b.Avg_Temperature, b.Low_Temperature FROM Locate a INNER JOIN Weather b ON a.City_Number=b.Town");
		printf("-------------------------------------------------------------------------------------\n");
		printf("Do you need to enter ther condition?\n");
		printf("1 : Yes\n");
		printf("2 : No\n");
		scanf("%d", &i);

		if (i == 1) {
			char ex[100];
			sprintf(a, "%s%s", a, " WHERE ");
			printf("Write a condition\n(ex:a.City='�����̸�', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
			scanf("%s", ex);
			sprintf(a, "%s%s", a, ex);
			return a[700];
		}
		else return a[700];
	}
	else if (n == 6) {
		int i;
		sprintf(a, "%s", "SELECT b.Days, a.City, b.Avg_Temperature, b.Low_Temperature, b.High_Temperature FROM Locate a INNER JOIN Weather b ON a.City_Number=b.Town");
		printf("-------------------------------------------------------------------------------------\n");
		printf("Do you need to enter ther condition?\n");
		printf("1 : Yes\n");
		printf("2 : No\n");
		scanf("%d", &i);

		if (i == 1) {
			char ex[100];
			sprintf(a, "%s%s", a, " WHERE ");
			printf("Write a condition\n(ex:a.City='�����̸�', b.Days='0000-00-00', b.Avg_Temperature, b.High_Temperature=00.0\n");
			scanf("%s", ex);
			sprintf(a, "%s%s", a, ex);
			return a[700];
		}
		else return a[700];
	}
	else{
		int i;
		sprintf(a, "%s", "SELECT b.Days, a.City, b.Low_Temperature, b.High_Temperature FROM Locate a INNER JOIN Weather b ON a.City_Number=b.Town");
		printf("-------------------------------------------------------------------------------------\n");
		printf("Do you need to enter ther condition?\n");
		printf("1 : Yes\n");
		printf("2 : No\n");
		scanf("%d", &i);

		if (i == 1) {
			char ex[100];
			sprintf(a, "%s%s", a, " WHERE ");
			printf("Write a condition\n(ex:a.City='�����̸�', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
			scanf("%s", ex);
			sprintf(a, "%s%s", a, ex);
			return a[700];
		}
		else return a[700];
	}
}
int main()
{
	MYSQL* connection = NULL, conn;
	MYSQL_RES* sql_result;
	MYSQL_ROW sql_row;

	int n=0;
	int res;
	mysql_init(&conn);
	connection = mysql_real_connect(&conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0); //C�� MySQL ����
	if (connection == NULL) {
		fprintf(stderr, "Mysql connection error: %s", mysql_error(&conn));
		return 1;
	}
	while (1) //����� ���� �� �Ŀ��� ���α׷��� ������� �ʵ��� ���� �ݺ��� ���
	{
		char condition[700] = "";
		int field, j = 0;
		printf("-------------------------------------------------------------------------------------\n"); //��ɿɼ�
		printf("Enter the mode:\n");
		printf("1 : input mode\n");
		printf("2 : delete mode\n");
		printf("3 : seaching mode\n");
		printf("4 : print all weather data\n");
		printf("5 : Exit the program\n");
		scanf("%d", &n);
	
		switch (n)
		{
		case 1: //input mode
			int k;
			printf("Choose a table to INSERT.(Locate=1, Weather=2)\n");
			scanf("%d", &k);

			if (k == 1) {
				char buff[255];
				char city[20];
				int cityNumber;

				printf("Enter 'city' and 'cityNumber'\n");
				scanf("%s", &city);
				scanf("%d", &cityNumber);

				sprintf(buff, "INSERT INTO Locate VALUES" "('%s', '%d')", city, cityNumber);

				if (mysql_query(connection, buff))
				{
					fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
					return 1;
				}

				printf("Result of a Query : %s\n", buff);
			}
			else if (k == 2) {
				char buff[255];
				char days[15];
				int TownNumber;
				float AverageTemperature;
				float LowTemperature;
				float HighTemperature;

				printf("Enter 'days' and 'TownNumber' and 'AverageTemperature' and 'LowTemperature' and 'HighTemperature'\n");
				scanf("%s", &days);
				scanf("%d", &TownNumber);
				scanf("%f", &AverageTemperature);
				scanf("%f", &LowTemperature);
				scanf("%f", &HighTemperature);

				sprintf(buff, "INSERT INTO Weather VALUES" "('%s', '%d', '%0.1f', '%0.1f', '%0.1f')", days, TownNumber, AverageTemperature, LowTemperature, HighTemperature);
				if (mysql_query(connection, buff))
				{
					fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
					return 1;
				}
				printf("Result of a Query : %s\n", buff);
			}
			break;
		case 2: //delete mode
			int m;
			printf("Choose a table to DELETE.(Locate=1, Weather=2)\n");
			scanf("%d", &m);
			if (m == 1) {
				char buff[255];
				char city[20];
				printf("Enter a 'city' to delete\n");
				scanf("%s", &city);
				sprintf(buff, "DELETE FROM Locate WHERE City = '%s'", city);

				if (mysql_query(connection, buff)){
					fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
					return 1;
				}
				printf("Result of a Query : %s\n", buff);
			}
			else if (m == 2) {
				char buff[255];
				int TownNumber;
				printf("Enter a 'TownNumber' to delete\n");
				scanf("%d", &TownNumber);
				sprintf(buff, "DELETE FROM Weather WHERE Town = %d", TownNumber);

				if (mysql_query(connection, buff)){
					fprintf(stderr, "Mysql query error : %s", mysql_error(&conn));
					return 1;
				}
				printf("Result of a Query : %s\n", buff);
			}
			break;
		case 3://Search mode
			while (1) {
				printf("-------------------------------------------------------------------------------------\n"); //����ڰ� ���ϴ� ������ ����
				printf("Choose the data you want.:\n");
				printf("1 : All Temperature\n");
				printf("2 : Avg Temperature\n");
				printf("3 : Low Temperature\n");
				printf("4 : High Temperature\n");
				printf("5 : Avg Temperature&Low Temperature\n");
				printf("6 : Avg Temperature&High Temperature\n");
				printf("7 : Low Temperature&High Temperature\n");
				scanf("%d", &j);
				if (j < 1 || j>7) continue;
				else break;
			}
			madeSearchConditon(j,condition); //���ǻ����Լ� ����
			mysql_query(connection, condition); // ������ ������ DB�� ����
			sql_result = mysql_store_result(connection); //������ ����� ����
			field = mysql_num_fields(sql_result); //������ ����� row ���ڸ� ����

			if ((sql_row = mysql_fetch_row(sql_result))==0) printf("DB don't have any data\n"); //���� �����Ͱ� ���ٸ� DB�� �����Ͱ� ���ٰ� ���
			else {
				while ((sql_row = mysql_fetch_row(sql_result)))
				{
					for (int i = 0; i < field; i++) {
						printf("%12s", sql_row[i]); //������ ���
					}
					printf("\n");
				}
				mysql_free_result(sql_result); //�޸� ����
			}
			break;
		case 4: //Weather Table�� ��� �����Ͱ� ���
			//mysql_query(connection, "select* FROM weather");
			mysql_query(connection, "SELECT b.Days, a.City, b.Avg_Temperature, b.Low_Temperature, b.High_Temperature FROM Locate a INNER JOIN Weather b ON a.City_Number=b.Town ");
			sql_result = mysql_store_result(connection);

			printf("%7s %8s %4s %5s %6s", "Date", "City", "AVG", "Low", "High\n");
			printf("-------------------------------------------------------------------------------------\n");
			while ((sql_row = mysql_fetch_row(sql_result)) != NULL)
			{
				printf("%s %s %s/ %s/ %s\n", sql_row[0], sql_row[1], sql_row[2], sql_row[3], sql_row[4]);
			}
			mysql_free_result(sql_result);
			break;
		case 5: //���α׷� ���� ���
			return 0;
		default: //1~5 �̿��� ���ڸ� �Է¹����� �ùٸ��� �ʴ� �ɼ��̶�� �߰�, ��ɼ���â���� ���ư�
			printf("This is an incorrect entry.\n");
			break;
		}
	}
}
