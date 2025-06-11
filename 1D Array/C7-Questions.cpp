
#include <iostream>
using namespace std;
int main()
{

// // Ques. 1--> Difference of Sum of Even Indices and odd indices Elements.

//     int sumeven = 0, sumodd = 0;
//     int arr[7] = {1,2,3,4,5,6,7};
//     for (int i = 1; i <= 7; i++)
//     {
//         if ((i - 1) % 2 == 0)
//         {
//             sumeven += arr[i - 1];
//         }
//         else
//         {
//             sumodd += arr[i - 1];
//         }
//     }
//     cout << sumeven << endl;
//     cout << sumodd << endl;
//     cout << sumeven - sumodd;
// }


// // Ques 2. --> Total Triplets of elements in {1,2,3,4,5,6,7,8} whose sum is 12.

//     int count = 0;
//     int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
//     for (int i = 1; i <= 8; i++)
//     {
//         for (int j = i; j <= 7; j++)
//         {
//             for (int k = j + 1; k <= 7; k++)
//             {
//                 if (arr[i - 1] + arr[j] + arr[k] == 12)
//                 {
//                     count++;
//                     cout << "(" << arr[i - 1] << ", " << arr[j] << ", " << arr[k] << ")" << endl;
//                 }
//             }
//         }
//     }
//     cout << count;
// }


// // Ques 3. --> Maximum Element in Array.

//     int arr[5] = {2, 4, 6, 3, 7};
//     // int max = -1;  // sbse chota number for comparison.
//     int max = arr[0]; // First Element Comparison.
//     for (int i = 1; i <= 5; i++)
//     {
//         if (max < arr[i - 1])
//             max = arr[i - 1];
//     }
//     cout << max;
// }


// // Ques 4. --> Copy Array in another in Reverse Order.

//     int arr[5] = {1, 2, 3, 4, 5};
//     int a[5];
//     for (int i = 0; i <= 4; i++)
//     {
//         cout << arr[i]<<" ";
//         a[i] = arr[4 - i];
//     }
//     cout<<endl;
//     for (int i = 0; i <= 4; i++)
//     {
//         cout << a[i]<<" ";
//     }
// }


// // Ques 5. --> Check if array is Palindrome or not.

//     int n;
//     cin >> n;
//     int flag = 0;
//     int arr[n];
//     for (int i = 0; i <= n - 1; i++)
//     {
//         cin >> arr[i];
//     }
//     for (int i = 0, j = n - 1; i < j; i++, j--)
//     {
//         if (arr[i] != arr[j])
//         {
//             flag = 1;
//             break;
//         }
//     }
//     if (flag == 0)
//         cout << "Array is Palindrome.";
//     else
//         cout << "Array is Not Palindrome.";
// }


// // Ques 6. --> Given An Array containing 1 to 10 Elements except one. Find That Missing one.

//     int arr[10] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
//     int sum = 0;
//     for (int i = 0; i <= 9; i++)
//     {
//         sum = sum + arr[i];
//     }
//     cout << 55 - sum;   // 1 to 10 sum = 55.
// }


// // Ques 7. --> Find Duplicate Element in the Array.

//     int arr[7] = {1, 2, 5, 4, 5, 6, 7};
//     for (int i = 0; i <= 6; i++)
//     {
//         for (int j = i + 1; j <= 6; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 cout << arr[i] << " is Duplicate Element." << endl;
//                 break;
//             }
//         }
//     }
// }
