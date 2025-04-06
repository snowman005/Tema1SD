# Tema 1 SD

Pentru a vedea rezultatele, se va compila si rula `main.cpp` cu inputul din `input.txt`

Comanda de compilare `g++ --std=c++17 main.cpp`

Rezultatul rularii testelor pe m4 pro: 

```
Test 1 || N = 200K MinVal = 1 MaxVal = 50

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              9 ms           Yes            
Heap Sort                40 ms          Yes            
Merge Sort               95 ms          Yes            
Quick Sort               453 ms         Yes            
Radix Sort b10           8 ms           Yes            
Radix Sort b16           5 ms           Yes            
Shell Sort               31 ms          Yes            
---------------------------------------------

Test 2 || N = 200K MinVal = 1 MaxVal = 100K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              12 ms          Yes            
Heap Sort                43 ms          Yes            
Merge Sort               96 ms          Yes            
Quick Sort               25 ms          Yes            
Radix Sort b10           19 ms          Yes            
Radix Sort b16           8 ms           Yes            
Shell Sort               48 ms          Yes            
---------------------------------------------

Test 3 || N = 500K MinVal = 1 MaxVal = 1K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              22 ms          Yes            
Heap Sort                113 ms         Yes            
Merge Sort               243 ms         Yes            
Quick Sort               193 ms         Yes            
Radix Sort b10           32 ms          Yes            
Radix Sort b16           8 ms           Yes            
Shell Sort               115 ms         Yes            
---------------------------------------------

Test 4 || N = 1M MinVal = 1 MaxVal = 2M

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              61 ms          Yes            
Heap Sort                252 ms         Yes            
Merge Sort               524 ms         Yes            
Quick Sort               147 ms         Yes            
Radix Sort b10           115 ms         Yes            
Radix Sort b16           34 ms          Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 5 || N = 500K MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              32 ms          Yes            
Heap Sort                118 ms         Yes            
Merge Sort               257 ms         Yes            
Quick Sort               68 ms          Yes            
Radix Sort b10           98 ms          Yes            
Radix Sort b16           17 ms          Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 6 || N = 10M MinVal = 1 MaxVal = 1K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              432 ms         Yes            
Heap Sort                2.97 s         Yes            
Merge Sort               5.52 s         Yes            
Quick Sort               60.70 s        Yes            
Radix Sort b10           647 ms         Yes            
Radix Sort b16           154 ms         Yes            
Shell Sort               2.79 s         Yes            
---------------------------------------------

Test 7 || N = 50M MinVal = 1 MaxVal = 1M

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              3.00 s         Yes            
Heap Sort                27.01 s        Yes            
Merge Sort               31.23 s        Yes            
Quick Sort               9.92 s         Yes            
Radix Sort b10           5.94 s         Yes            
Radix Sort b16           1.84 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 8 || N = 50M MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              3.47 s         Yes            
Heap Sort                27.20 s        Yes            
Merge Sort               32.08 s        Yes            
Quick Sort               9.31 s         Yes            
Radix Sort b10           10.18 s        Yes            
Radix Sort b16           2.06 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 9 || N = 100M MinVal = 1 MaxVal = 100K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              5.83 s         Yes            
Heap Sort                60.44 s        Yes            
Merge Sort               64.11 s        Yes            
Quick Sort               72.63 s        Yes            
Radix Sort b10           10.37 s        Yes            
Radix Sort b16           3.99 s         Yes            
Shell Sort               64.58 s        Yes            
---------------------------------------------

Test 10 || N = 100M MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              7.59 s         Yes            
Heap Sort                61.56 s        Yes            
Merge Sort               67.29 s        Yes            
Quick Sort               19.34 s        Yes            
Radix Sort b10           20.28 s        Yes            
Radix Sort b16           4.18 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------
```
