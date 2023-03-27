#include<iostream>
using namespace std;


int main()
{
	int a_row, a_colmn, b_row, b_colmn, c_row, c_colmn;
	cout<<"This Program will add two Matrixes....\n";
//	<............Input order or Matrix A .........>
	cout<<"Order of Matrix A (n*m):\n";
	cin>>a_row>>a_colmn;
	cout<<"Order of Matrix is: "<<a_row<<"*"<<a_colmn<<endl;
//	<............Input order or matrix B .........>
	cout<<"Order of Matrix A (n*m):\n";
	cin>>b_row>>b_colmn;
	cout<<"Order of Matrix is: "<<b_row<<"*"<<b_colmn<<endl;
	int mat_a[a_row][a_colmn], mat_b[b_row][b_colmn];
//	checking for the same order of matrix
	if(a_row==b_row && a_colmn == b_colmn){
//		<........ Input Values for Matrix A ......>
		cout<<"Enter Values of Matrix A"<<endl;
		for(int i=0; i<a_row; i++){
			for(int j=0; j<a_colmn; j++){
				cout<<"Enter Value of "<<i+1<<"*"<<j+1<<": ";
				cin>>mat_a[i][j];
			}
		}
		cout<<endl;
//		<........ Full Ordered values Matrix A ......>
		cout<<"The Matrix A: "<<endl;
		for(int i=0; i<a_row; i++){
			for(int j=0; j<a_colmn; j++){
				cout<<mat_a[i][j]<<"\t";
			}
			cout<<endl;
		}
//		<........ Input Values for Matrix B ......>
		cout<<"Enter Values of Matrix B"<<endl;
		for(int i=0; i<b_row; i++){
			for(int j=0; j<b_colmn; j++){
				cout<<"Enter Value of "<<i+1<<"*"<<j+1<<": ";
				cin>>mat_b[i][j];
			}
		}
		cout<<endl;
		cout<<"The Matrix B: "<<endl;
//		showing output of mat B
		for(int i=0; i<b_row; i++){
			for(int j=0; j<b_colmn; j++){
				cout<<mat_b[i][j]<<"\t";
			}
			cout<<endl;
		}
		c_row = a_row;
		c_colmn = a_colmn;
		int mat_c[c_row][c_colmn];
		for(int i=0; i<a_row; i++){
			for(int j=0; j<a_colmn; j++){
			mat_c[i][j] = mat_a[i][j]+mat_b[i][j];
			cout<<"Value of on "<<i+1<<"*"<<j+1<<" is: "<<mat_c[i][j]<<endl;
			}
			
		}
		
//		showing results
		cout<<"The Sum of Matrix A and Matrix B: "<<endl;
		for(int i=0; i<a_row; i++){
			for(int j=0; j<a_colmn; j++){			
			cout<<mat_c[i][j]<<"\t";
			}
			cout<<endl;
		}
	}
	else {
		cout<<"Addtion of These Matixes is not Possible...... Order Must be same";
	}
	return 0;
}
