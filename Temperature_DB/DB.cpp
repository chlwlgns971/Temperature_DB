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

int madeSearchConditon(int n, char a[700]) //Search 조건 생성하는 함수
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
			printf("Write a condition\n(ex:a.City='도시이름', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
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
			printf("Write a condition\n(ex:a.City='도시이름', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
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
			printf("Write a condition\n(ex:a.City='도시이름', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
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
			printf("Write a condition\n(ex:a.City='도시이름', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
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
			printf("Write a condition\n(ex:a.City='도시이름', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
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
			printf("Write a condition\n(ex:a.City='도시이름', b.Days='0000-00-00', b.Avg_Temperature, b.High_Temperature=00.0\n");
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
			printf("Write a condition\n(ex:a.City='도시이름', b.Days='0000-00-00', b.Avg_Temperature, b.Low_Temperature, b.High_Temperature=00.0\n");
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
	connection = mysql_real_connect(&conn, DB_HOST, DB_USER, DB_PASS, DB_NAME, 3306, (char*)NULL, 0); //C와 MySQL 연결
	if (connection == NULL) {
		fprintf(stderr, "Mysql connection error: %s", mysql_error(&conn));
		return 1;
	}
	while (1) //기능이 실행 된 후에도 프로그램이 종료되지 않도록 무한 반복문 사용
	{
		char condition[700] = "";
		int field, j = 0;
		printf("-------------------------------------------------------------------------------------\n"); //기능옵션
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
				printf("-------------------------------------------------------------------------------------\n"); //사용자가 원하는 데이터 선택
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
			madeSearchConditon(j,condition); //조건생성함수 실행
			mysql_query(connection, condition); // 생성된 조건을 DB에 보냄
			sql_result = mysql_store_result(connection); //생성된 결과를 받음
			field = mysql_num_fields(sql_result); //생성된 결과의 row 숫자를 받음

			if ((sql_row = mysql_fetch_row(sql_result))==0) printf("DB don't have any data\n"); //받은 데이터가 없다면 DB에 데이터가 없다고 출력
			else {
				while ((sql_row = mysql_fetch_row(sql_result)))
				{
					for (int i = 0; i < field; i++) {
						printf("%12s", sql_row[i]); //데이터 출력
					}
					printf("\n");
				}
				mysql_free_result(sql_result); //메모리 해제
			}
			break;
		case 4: //Weather Table의 모든 데이터값 출력
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
		case 5: //프로그램 종료 기능
			return 0;
		default: //1~5 이외의 숫자를 입력받으면 올바르지 않는 옵션이라고 뜨고, 기능선택창으로 돌아감
			printf("This is an incorrect entry.\n");
			break;
		}
	}
}
