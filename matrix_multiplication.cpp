#include<iostream>

using namespace std;

int main(){
	int row1,row2,col1,col2;
	cout<<"############# MATRIX MULTIPLICATION #################"<<endl<<endl;
	cout<<"Enter the number of rows and columns of matrix A: "<<endl;
	cin>>row1>>col1;
	cout<<"Enter the number of rows and columns of matrix B: "<<endl;
	cin>>row2>>col2;
	if(col1 != row2){
		cout<<"The matrices cannot be multiplied!"<<endl;
	}else{
		int A[100][100]={0},B[100][100]={0},C[100][100]={0};
		cout<<"\nFor matrix A: "<<endl<<endl;
		for(int i=0;i<row1;i++){
			for(int j=0;j<col1;j++){
				cout<<"Enter the element for position A"<<i+1<<j+1<<":"<<endl;
				cin>>A[i][j];
			}
		}		
		cout<<"\nFor matrix B: "<<endl<<endl;
		for(int i=0;i<row2;i++){
			for(int j=0;j<col2;j++){
				cout<<"Enter the element for position B"<<i+1<<j+1<<":"<<endl;
				cin>>B[i][j];
			}
		}
		for(int i=0;i<row1;i++){
			for(int j=0;j<col2;j++){
				for(int k=0;k<row2;k++){
					C[i][j]+=A[i][k]*B[k][j];
				}
			}
		}
		cout<<"\nThe matrix obtained on the multiplication of matrices A and B is: "<<endl<<endl;
		cout<<"["<<endl;
		for(int i=0;i<row1;i++){
			cout<<" [ ";
			for(int j=0;j<col2;j++){
				cout<<C[i][j]<<" ";
			}cout<<" ]"<<endl;
		}
		cout<<"]";	
	}
	return 0;
}

