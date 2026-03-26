**ISAAC NJUGUNA BRIDGET**  
**EB3/67226/23**  

**Whats Stooge Sort?**  
This is a recursive sorting algorithm, it repeatedly sorts overlapping portions of an array.  
Not practical in real life since its slow but its good for study and research.  
So instead of dividing the arrayin half like the Merge sort it diveds the array in 2/3 sections and sorts them multiple times. It does this 3 times  

**Is Stooge a divide and conquer??**  
answer is yes. since it divides the array into parts  
azin(first 2/3, last 2/3 and first 2/3 again).  
then it recursively solves the arry and combines it again when sorted.  

**implemetation part**  
**how does stooge actually work??**  

**initial array[8,2,4,5]**  
step 1: compare first and last element ensuring the smallest btw the two comes on index 0.  
**if(arr[l] > arr[h]) swap(arr[l], arr[h]);**  

step 2: Checks if the array has 2 or more elements if yes the recursive sorting will continue if otherwise its done and sorted.  
**if(h - l + 1 > 2)**  

step 3: claculate 1/3 of the section of the array  
**int t = (h - l + 1) / 3;**  

step 4: recursively sort first 2/3 then last 2/3 again the first 2/3.  

**stoogeSort(arr, l, h - t); //first 2/3**  
**stoogeSort(arr, l + t, h); //last 2/3**  
**stoogeSort(arr, l, h - t); //first 2/3**  

**Stooge time complexity**  
Stooge divides array in 2/3 sections and with 3 recursive calls  
T(n) = 3 * T(2n/3) + O(1)  
using log  
Best CAse ..when sorted  -> O(n^log₍₃/₂₎ 3)  
Worst Case in descending order  -> O(n^log₍₃/₂₎ 3)  
average Case just random order -> O(n^log₍₃/₂₎ 3)  

Stooge is NOT always the same in operations done but in Big-O terms, it is dominated by the recursive calls, so all cases are similar.
