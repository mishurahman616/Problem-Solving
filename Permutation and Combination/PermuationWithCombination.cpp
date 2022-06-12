
#include<bits/stdc++.h>
using namespace std;
void permute(string str, string out)
{

	if (str.size() == 0)
	{


	    ofstream myfile;
  myfile.open ("example.txt", ios::app);
  myfile << out <<"\n";
  myfile.close();
		cout << out << endl;
		return;
	}


	for (int i = 0; i < str.size(); i++)
	{

		permute(str.substr(1), out + str[0]);


		rotate(str.begin(), str.begin() + 1, str.end());
	}
}

void combinationUtil(int arr[], int data[],
					int start, int end,
					int index, int r);


void printCombination(int arr[], int n, int r)
{

	int data[r];


	combinationUtil(arr, data, 0, n-1, 0, r);
}

void combinationUtil(int arr[], int data[],
					int start, int end,
					int index, int r)
{


	string store="";
	if (index == r)
	{
		for (int j = 0; j < r; j++)
			{store.push_back(data[j]);}
		cout << endl;
		permute(store, "");
		return;
	}


	for (int i = start; i <= end &&
		end - i + 1 >= r - index; i++)
	{
		data[index] = arr[i];
		combinationUtil(arr, data, i+1,
						end, index+1, r);
	}
}


int main()
{
	int arr[] = {'0', '0', '0', '1', '1', '1', '2', '2', '2', '3', '3', '3', '4', '4', '4', '5', '5', '5', '6', '6', '6', '7', '7', '7', '8', '8', '8', '9', '9', '9'};
	int r = 3;
	int n = sizeof(arr)/sizeof(arr[0]);
	printCombination(arr, n, r);
}

