#include <iostream>
using namespace std;


int countif=0;
int tukardata=0;
//Fungsi yang menggabungkan dua bagian menjadi data tersortir
void Merge(int *a, int low, int high, int mid)
{
	// We have low to mid and mid+1 to high already sorted.
	// Mendefiniskan low ke mid dan mid+1 ke high yang disortir.
	int i, j, k, temp[high-low+1];
	i = low;
	k = 0;
	j = mid + 1;

	//Merge kedua bagian ke dalam temp[]
	while (i <= mid && j <= high)
	{
		if (a[i] < a[j])
		{
			temp[k] = a[i];
			k++;
			i++;

			countif++;
		}

		else
		{
			temp[k] = a[j];
			k++;
			j++;

			countif++;
		}

	}

	// Input seluruh nilai yang ada dari i ke mid menuju temp[].
	while (i <= mid)
	{
		temp[k] = a[i];
		tukardata+=1;
		k++;
		i++;
	}

	// Input seluruh nilai yag ada dari j ke high menuju temp[].
	while (j <= high)
	{
		temp[k] = a[j];
		tukardata+=1;
		k++;
		j++;
	}

	// Menempatkan data yang sudah tersortir disimpan dari temp[] ke a[].
	for (i = low; i <= high; i++)
	{
		a[i] = temp[i-low];
    }
}

//Fungsi yang memisahkan array menjadi 2 bagian.
void MergeSort(int *a, int low, int high)
{
	int mid;
	if (low < high)
	{
		mid=(low+high)/2;
		// Membagi data menjadi dua bagian.
		MergeSort(a, low, mid);
		MergeSort(a, mid+1, high);

		// Merge keduanya untuk memperoleh output tersortir.
		Merge(a, low, high, mid);
	}
}

int main()
{
	int n, i;
	cin>>n;

	int arr[n];
	for(i = 0; i < n; i++)
	{
		cin>>arr[i];
	}

	MergeSort(arr, 0, n-1);

	// Print data yang sudah tersortir.
	for (i = 0; i < n; i++)
        cout<<arr[i]<<" ";
    cout << "\n" << countif << "\n" << tukardata << endl;

	return 0;
}
