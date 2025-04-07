# Tema 1 SD

Pentru a vedea rezultatele, se va compila si rula `main.cpp` cu inputul din `input.txt`

Comanda de compilare `g++ --std=c++17 main.cpp`

Rezultatul rularii testelor pe m4 pro: 

```

Test 1 || N = 1K MinVal = 1 MaxVal = 1000T

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              0 ms           Yes            
Heap Sort                0 ms           Yes            
Merge Sort               0 ms           Yes            
Quick Sort               0 ms           Yes            
Radix Sort b10           0 ms           Yes            
Radix Sort b16           0 ms           Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 2 || N = 100K MinVal = 1 MaxVal = 1000T

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              2 ms           Yes            
Heap Sort                7 ms           Yes            
Merge Sort               9 ms           Yes            
Quick Sort               5 ms           Yes            
Radix Sort b10           5 ms           Yes            
Radix Sort b16           1 ms           Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 3 || N = 200K MinVal = 1 MaxVal = 50

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              0 ms           Yes            
Heap Sort                11 ms          Yes            
Merge Sort               16 ms          Yes            
Quick Sort               102 ms         Yes            
Radix Sort b10           1 ms           Yes            
Radix Sort b16           0 ms           Yes            
Shell Sort               8 ms           Yes            
---------------------------------------------

Test 4 || N = 200K MinVal = 1 MaxVal = 100K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              4 ms           Yes            
Heap Sort                13 ms          Yes            
Merge Sort               14 ms          Yes            
Quick Sort               9 ms           Yes            
Radix Sort b10           3 ms           Yes            
Radix Sort b16           1 ms           Yes            
Shell Sort               14 ms          Yes            
---------------------------------------------

Test 5 || N = 500K MinVal = 1 MaxVal = 1K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              3 ms           Yes            
Heap Sort                31 ms          Yes            
Merge Sort               38 ms          Yes            
Quick Sort               45 ms          Yes            
Radix Sort b10           5 ms           Yes            
Radix Sort b16           1 ms           Yes            
Shell Sort               30 ms          Yes            
---------------------------------------------

Test 6 || N = 500K MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              12 ms          Yes            
Heap Sort                37 ms          Yes            
Merge Sort               38 ms          Yes            
Quick Sort               24 ms          Yes            
Radix Sort b10           13 ms          Yes            
Radix Sort b16           2 ms           Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 7 || N = 1M MinVal = 1 MaxVal = 2M

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              25 ms          Yes            
Heap Sort                86 ms          Yes            
Merge Sort               76 ms          Yes            
Quick Sort               50 ms          Yes            
Radix Sort b10           19 ms          Yes            
Radix Sort b16           5 ms           Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 8 || N = 1M MinVal = 1 MaxVal = 1000T

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              24 ms          Yes            
Heap Sort                87 ms          Yes            
Merge Sort               80 ms          Yes            
Quick Sort               50 ms          Yes            
Radix Sort b10           41 ms          Yes            
Radix Sort b16           11 ms          Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 9 || N = 10M MinVal = 1 MaxVal = 1K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              57 ms          Yes            
Heap Sort                1.98 s         Yes            
Merge Sort               920 ms         Yes            
Quick Sort               12.37 s        Yes            
Radix Sort b10           123 ms         Yes            
Radix Sort b16           37 ms          Yes            
Shell Sort               743 ms         Yes            
---------------------------------------------

Test 10 || N = 50M MinVal = 1 MaxVal = 1M

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              1.81 s         Yes            
Heap Sort                31.48 s        Yes            
Merge Sort               5.73 s         Yes            
Quick Sort               3.31 s         Yes            
Radix Sort b10           1.37 s         Yes            
Radix Sort b16           502 ms         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 11 || N = 50M MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              1.91 s         Yes            
Heap Sort                30.82 s        Yes            
Merge Sort               5.51 s         Yes            
Quick Sort               3.27 s         Yes            
Radix Sort b10           1.78 s         Yes            
Radix Sort b16           504 ms         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 12 || N = 50M MinVal = 1 MaxVal = 1000T

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              1.67 s         Yes            
Heap Sort                30.70 s        Yes            
Merge Sort               5.49 s         Yes            
Quick Sort               3.24 s         Yes            
Radix Sort b10           2.52 s         Yes            
Radix Sort b16           780 ms         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 13 || N = 100M MinVal = 1 MaxVal = 100K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              2.99 s         Yes            
Heap Sort                69.40 s        Yes            
Merge Sort               12.20 s        Yes            
Quick Sort               18.88 s        Yes            
Radix Sort b10           3.28 s         Yes            
Radix Sort b16           1.90 s         Yes            
Shell Sort               13.91 s        Yes            
---------------------------------------------

Test 14 || N = 100M MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              3.83 s         Yes            
Heap Sort                69.23 s        Yes            
Merge Sort               10.42 s        Yes            
Quick Sort               7.31 s         Yes            
Radix Sort b10           3.46 s         Yes            
Radix Sort b16           1.39 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 15 || N = 100M MinVal = 1 MaxVal = 100T

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              4.59 s         Yes            
Heap Sort                70.19 s        Yes            
Merge Sort               11.56 s        Yes            
Quick Sort               7.14 s         Yes            
Radix Sort b10           5.33 s         Yes            
Radix Sort b16           2.15 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------
```

Teste pe i5-11400H
```
Test 1 || N = 1K MinVal = 1 MaxVal = 1000T

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              0 ms           Yes            
Heap Sort                0 ms           Yes            
Merge Sort               0 ms           Yes            
Quick Sort               0 ms           Yes            
Radix Sort b10           0 ms           Yes            
Radix Sort b16           0 ms           Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 2 || N = 100K MinVal = 1 MaxVal = 1000T

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              3 ms           Yes            
Heap Sort                8 ms           Yes            
Merge Sort               8 ms           Yes            
Quick Sort               5 ms           Yes            
Radix Sort b10           16 ms          Yes            
Radix Sort b16           2 ms           Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 3 || N = 200K MinVal = 1 MaxVal = 50

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              1 ms           Yes            
Heap Sort                14 ms          Yes            
Merge Sort               12 ms          Yes            
Quick Sort               105 ms         Yes            
Radix Sort b10           5 ms           Yes            
Radix Sort b16           1 ms           Yes            
Shell Sort               14 ms          Yes            
---------------------------------------------

Test 4 || N = 200K MinVal = 1 MaxVal = 100K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              8 ms           Yes            
Heap Sort                23 ms          Yes            
Merge Sort               17 ms          Yes            
Quick Sort               11 ms          Yes            
Radix Sort b10           11 ms          Yes            
Radix Sort b16           2 ms           Yes            
Shell Sort               23 ms          Yes            
---------------------------------------------

Test 5 || N = 500K MinVal = 1 MaxVal = 1K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              8 ms           Yes            
Heap Sort                50 ms          Yes            
Merge Sort               39 ms          Yes            
Quick Sort               56 ms          Yes            
Radix Sort b10           23 ms          Yes            
Radix Sort b16           3 ms           Yes            
Shell Sort               46 ms          Yes            
---------------------------------------------

Test 6 || N = 500K MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              19 ms          Yes            
Heap Sort                72 ms          Yes            
Merge Sort               45 ms          Yes            
Quick Sort               33 ms          Yes            
Radix Sort b10           57 ms          Yes            
Radix Sort b16           10 ms          Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 7 || N = 1M MinVal = 1 MaxVal = 2M

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              49 ms          Yes            
Heap Sort                161 ms         Yes            
Merge Sort               103 ms         Yes            
Quick Sort               67 ms          Yes            
Radix Sort b10           84 ms          Yes            
Radix Sort b16           16 ms          Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 8 || N = 1M MinVal = 1 MaxVal = 1000T

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              42 ms          Yes            
Heap Sort                184 ms         Yes            
Merge Sort               105 ms         Yes            
Quick Sort               72 ms          Yes            
Radix Sort b10           183 ms         Yes            
Radix Sort b16           39 ms          Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 9 || N = 10M MinVal = 1 MaxVal = 1K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              432 ms         Yes            
Heap Sort                2.49 s         Yes            
Merge Sort               1.14 s         Yes            
Quick Sort               11.67 s        Yes            
Radix Sort b10           640 ms         Yes            
Radix Sort b16           172 ms         Yes            
Shell Sort               1.53 s         Yes            
---------------------------------------------

Test 10 || N = 50M MinVal = 1 MaxVal = 1M

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              6.49 s         Yes            
Heap Sort                23.04 s        Yes            
Merge Sort               10.17 s        Yes            
Quick Sort               8.10 s         Yes            
Radix Sort b10           7.97 s         Yes            
Radix Sort b16           4.47 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 11 || N = 50M MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              3.89 s         Yes            
Heap Sort                21.52 s        Yes            
Merge Sort               6.83 s         Yes            
Quick Sort               4.64 s         Yes            
Radix Sort b10           5.89 s         Yes            
Radix Sort b16           1.86 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 12 || N = 50M MinVal = 1 MaxVal = 1000T

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              3.68 s         Yes            
Heap Sort                20.15 s        Yes            
Merge Sort               7.17 s         Yes            
Quick Sort               4.87 s         Yes            
Radix Sort b10           9.58 s         Yes            
Radix Sort b16           2.63 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 13 || N = 100M MinVal = 1 MaxVal = 100K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              10.34 s        Yes            
Heap Sort                51.24 s        Yes            
Merge Sort               17.38 s        Yes            
Quick Sort               24.77 s        Yes            
Radix Sort b10           11.17 s        Yes            
Radix Sort b16           7.46 s         Yes            
Shell Sort               31.79 s        Yes            
---------------------------------------------

Test 14 || N = 100M MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              8.46 s         Yes            
Heap Sort                45.26 s        Yes            
Merge Sort               14.77 s        Yes            
Quick Sort               10.10 s        Yes            
Radix Sort b10           12.27 s        Yes            
Radix Sort b16           5.11 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 15 || N = 100M MinVal = 1 MaxVal = 100T

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              7.86 s         Yes            
Heap Sort                50.64 s        Yes            
Merge Sort               17.93 s        Yes            
Quick Sort               13.07 s        Yes            
Radix Sort b10           21.13 s        Yes            
Radix Sort b16           7.08 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------
```