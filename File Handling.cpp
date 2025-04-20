#include<iostream>
#include<fstream> //step 1 //include header file for using ifstream and ofstream

using namespace std;

int main()
{
	ifstream fin;
	fin.open("Data.txt.txt"); //step 2 //open your file using .open() function
	if (fin.is_open())
	{
		cout << "File Opened Successfully\n";
	}
	else
	{
		cout << "File is not opened... Try Again\n";
	}
	int num = 0;
	fin >> num; // step 3 // get input from the file to a local variable
	cout << "Number: " << num << "\n";
	fin.close(); //steo 4 // Always close your file after taking input or taking input again
	
	ofstream fout; // step 1 create fout object 

	fout.open("Data.txt.txt",ios::app); //step 2 // open the file you want to store the output //if the file does not exist .open()  will create the new file
	fout << num;
	fout.close();

	//Reading Integer Array from file

	ifstream fin1;

	fin1.open("array.txt"); //opening file to read integers from file
	if (fin1.is_open()) // is_open() returns 1 if the file is opened 
	{
		cout << "File Opened....\n";
	}
	else
	{
		cout << "File not opened....\n";
	}

	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		fin1 >> arr[i]; //Reading input from file to each index of integer array
		cout << arr[i] << " ";
	}
	fin1.close(); //closed file after taking input

}