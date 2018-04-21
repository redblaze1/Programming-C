#include<iostream>
using namespace std;
template <typename T>
int binarySearch(const T list[], T key, int listSize){

    int low = 0;
    int high = listSize - 1;
    
    while (high >= low){
    int mid = (low + high) / 2;
    if (key < list[mid])
    high = mid - 1;
    else if (key == list[mid])
    return mid;
    else
    low = mid + 1;
 }
    return -1;
}
template <typename T>
void insertionSort(T list[], int listSize) 
{
  for (int i = 1; i < listSize; i++) 
  {
    // Insert list[i] into a sorted sublist list[0..i-1] so that
    //  list[0..i] is sorted. 
    T currentElement = list[i];
    int k;
    for (k = i - 1; k >= 0 && list[k] > currentElement; k--) 
    {
      list[k + 1] = list[k];
    }

    // Insert the current element into list[k+1]
    list[k + 1] = currentElement;
  }
}

int main()
{
  const int SIZE = 9;
  int list[]={1,5,6,2,3,7,9,8,4};
  double list2[]={1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4};
  insertionSort(list, SIZE);
  insertionSort(list2, SIZE);
  // for (int i = 0; i < SIZE; i++)
  //   cout << list[i] << " ";
  cout << "From: 1,5,6,2,3,7,9,8,4\nTo: 1,2,3,4,5,6,7,8,9\n";
  int a,b,c;
  cin >> a >> b >> c;
  cout << a << " at " << binarySearch(list,a,SIZE) << "\n" << b << " at " << binarySearch(list,b,SIZE) << "\n" << c << " at " << binarySearch(list,c,SIZE);
  cout << "\n";
  cout << "\nFrom: 1.1,5.5,6.6,2.2,3.3,7.7,9.9,8.8,4.4\nTo: 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.9" << endl;
  double d,e,f;
  cin >> d >> e >> f;
  cout << d << " at " << binarySearch(list2,d,SIZE) << "\n" << e << " at " << binarySearch(list2,e,SIZE) << "\n" << f << " at " << binarySearch(list2,f,SIZE);
  return 0;
}  