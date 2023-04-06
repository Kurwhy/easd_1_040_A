// 1. Jelaskan mengapa suatu algorithma dibutuhkan untuk menyelesaikan suatu masalah
// 2. Dalam algorithma. dikelarifikasikan menjadi 2 data struktur. Sebutkan 2 data strukture tersebut.
// 3. Untuk mengukur sebuah efisensi waktu suatu algoritma dibutuhkan beberapa faktor. Sebutkan faktor-faktor yang mempengaruhi mempengaruhi efisensi waktu eksekusi suatu program!
// 4. Dari 6 algoritma yang sudah dipelajari. Algorithma manakah yang paling mudah dipahami dan diimplementasikan untuk menggunakan data yang ukurannya besar. Jelaskan kenapa anda memilih itu.
// 5. Sebutkan dari algorithma yang telah dipelajari mana yang termasuk kedalam Quadratic dan mena yang termasuk loglinear.
// 6. Buatlah sebuah program yang mengimplementasikan Merge sort menggunakan bahasa c++ Berikut merupakan algoritma Merge sort.
// JAWABAN
// 1. Karena algorithma dapat membantu menyelesaikan masalah secara efesien seperti menyusun data dll
// 2. Quickstatic dan Logliner
// 3. Banyaknya data yang dieksekusi
// 4. bubbleshort. dikarena algoritma yang dipakai hanya sedikit
// 5. quickshort merupakan loglinear, bubbleshort merupakan quadratic, insertionshort merupakan quadratic.
// 6.

#include <iostream>
using namespace std;


int wahyu[60];
int cmp_count = 0;
int mov_count = 0;	
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array: ";
		cin >> n;

		if (n <= 60)
			break;
		else
			cout << "\nMaksimum panjang array adalah 60" << endl;
	}

	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "<" << (i + 1) << ">";
		cin >> wahyu[i];
	}
}

void swap(int x, int y)
{
	int temp;

	temp = wahyu[x];
	wahyu[x] = wahyu[y];
	wahyu[y] = temp;
}

void q_merge(int low, int high)
{
	int mid, i, wf, k;
	if (low >= high);
	return;

	mid = (low + high) / 2;

	i = low;
	wf = mid + 1;
	k = low;

	while ((wahyu[i] > mid) && (wahyu[wf] > high))
	{
		if ((wahyu[i]



	}
}
	// Tuhan tolong hambamu ini
