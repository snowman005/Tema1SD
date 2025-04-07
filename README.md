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

Teste pe i5-11400H fara flag -O3
```
Test 1 || N = 200K MinVal = 1 MaxVal = 50

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              24 ms          Yes            
Heap Sort                60 ms          Yes            
Merge Sort               65 ms          Yes            
Quick Sort               614 ms         Yes            
Radix Sort b10           10 ms          Yes            
Radix Sort b16           5 ms           Yes            
Shell Sort               43 ms          Yes            
---------------------------------------------

Test 2 || N = 200K MinVal = 1 MaxVal = 100K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              24 ms          Yes            
Heap Sort                67 ms          Yes            
Merge Sort               60 ms          Yes            
Quick Sort               44 ms          Yes            
Radix Sort b10           18 ms          Yes            
Radix Sort b16           9 ms           Yes            
Shell Sort               74 ms          Yes            
---------------------------------------------

Test 3 || N = 500K MinVal = 1 MaxVal = 1K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              47 ms          Yes            
Heap Sort                189 ms         Yes            
Merge Sort               198 ms         Yes            
Quick Sort               305 ms         Yes            
Radix Sort b10           41 ms          Yes            
Radix Sort b16           11 ms          Yes            
Shell Sort               163 ms         Yes            
---------------------------------------------

Test 4 || N = 1M MinVal = 1 MaxVal = 2M

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              170 ms         Yes            
Heap Sort                432 ms         Yes            
Merge Sort               345 ms         Yes            
Quick Sort               217 ms         Yes            
Radix Sort b10           139 ms         Yes            
Radix Sort b16           34 ms          Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 5 || N = 500K MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              85 ms          Yes            
Heap Sort                178 ms         Yes            
Merge Sort               147 ms         Yes            
Quick Sort               100 ms         Yes            
Radix Sort b10           104 ms         Yes            
Radix Sort b16           26 ms          Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 6 || N = 10M MinVal = 1 MaxVal = 1K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              1.73 s         Yes            
Heap Sort                5.85 s         Yes            
Merge Sort               3.79 s         Yes            
Quick Sort               83.18 s        Yes            
Radix Sort b10           896 ms         Yes            
Radix Sort b16           222 ms         Yes            
Shell Sort               4.18 s         Yes            
---------------------------------------------

Test 7 || N = 50M MinVal = 1 MaxVal = 1M

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              12.45 s        Yes            
Heap Sort                51.38 s        Yes            
Merge Sort               23.74 s        Yes            
Quick Sort               18.31 s        Yes            
Radix Sort b10           10.07 s        Yes            
Radix Sort b16           5.34 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 8 || N = 50M MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              10.92 s        Yes            
Heap Sort                50.03 s        Yes            
Merge Sort               25.43 s        Yes            
Quick Sort               15.44 s        Yes            
Radix Sort b10           12.45 s        Yes            
Radix Sort b16           3.05 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 9 || N = 100M MinVal = 1 MaxVal = 100K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              21.36 s        Yes            
Heap Sort                126.25 s       Yes            
Merge Sort               51.13 s        Yes            
Quick Sort               127.64 s       Yes            
Radix Sort b10           14.37 s        Yes            
Radix Sort b16           6.25 s         Yes            
Shell Sort               111.83 s       Yes            
---------------------------------------------

Test 10 || N = 100M MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              28.58 s        Yes            
Heap Sort                122.18 s       Yes            
Merge Sort               54.01 s        Yes            
Quick Sort               36.56 s        Yes            
Radix Sort b10           29.62 s        Yes            
Radix Sort b16           10.36 s        Yes            
Shell Sort               0 ms           No             
---------------------------------------------
```


Teste pe i5-11400H cu -O3 flag

```
Test 1 || N = 200K MinVal = 1 MaxVal = 50

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              3 ms           Yes            
Heap Sort                15 ms          Yes            
Merge Sort               11 ms          Yes            
Quick Sort               92 ms          Yes            
Radix Sort b10           2 ms           Yes            
Radix Sort b16           0 ms           Yes            
Shell Sort               12 ms          Yes            
---------------------------------------------

Test 2 || N = 200K MinVal = 1 MaxVal = 100K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              6 ms           Yes            
Heap Sort                19 ms          Yes            
Merge Sort               16 ms          Yes            
Quick Sort               11 ms          Yes            
Radix Sort b10           6 ms           Yes            
Radix Sort b16           1 ms           Yes            
Shell Sort               20 ms          Yes            
---------------------------------------------

Test 3 || N = 500K MinVal = 1 MaxVal = 1K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              7 ms           Yes            
Heap Sort                49 ms          Yes            
Merge Sort               35 ms          Yes            
Quick Sort               55 ms          Yes            
Radix Sort b10           13 ms          Yes            
Radix Sort b16           2 ms           Yes            
Shell Sort               46 ms          Yes            
---------------------------------------------

Test 4 || N = 1M MinVal = 1 MaxVal = 2M

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              38 ms          Yes            
Heap Sort                112 ms         Yes            
Merge Sort               90 ms          Yes            
Quick Sort               62 ms          Yes            
Radix Sort b10           44 ms          Yes            
Radix Sort b16           11 ms          Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 5 || N = 500K MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              16 ms          Yes            
Heap Sort                55 ms          Yes            
Merge Sort               46 ms          Yes            
Quick Sort               30 ms          Yes            
Radix Sort b10           34 ms          Yes            
Radix Sort b16           4 ms           Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 6 || N = 10M MinVal = 1 MaxVal = 1K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              172 ms         Yes            
Heap Sort                1.85 s         Yes            
Merge Sort               854 ms         Yes            
Quick Sort               11.81 s        Yes            
Radix Sort b10           284 ms         Yes            
Radix Sort b16           62 ms          Yes            
Shell Sort               1.13 s         Yes            
---------------------------------------------

Test 7 || N = 50M MinVal = 1 MaxVal = 1M

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              2.23 s         Yes            
Heap Sort                20.59 s        Yes            
Merge Sort               9.38 s         Yes            
Quick Sort               8.04 s         Yes            
Radix Sort b10           6.07 s         Yes            
Radix Sort b16           839 ms         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 8 || N = 50M MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              2.69 s         Yes            
Heap Sort                16.55 s        Yes            
Merge Sort               6.14 s         Yes            
Quick Sort               4.42 s         Yes            
Radix Sort b10           4.30 s         Yes            
Radix Sort b16           1.15 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------

Test 9 || N = 100M MinVal = 1 MaxVal = 100K

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              5.50 s         Yes            
Heap Sort                40.34 s        Yes            
Merge Sort               11.41 s        Yes            
Quick Sort               21.08 s        Yes            
Radix Sort b10           4.86 s         Yes            
Radix Sort b16           2.32 s         Yes            
Shell Sort               22.11 s        Yes            
---------------------------------------------

Test 10 || N = 100M MinVal = 1 MaxVal = 2B

Algorithm                Time (ms)      Sorted         
---------------------------------------------
Bucket Sort              7.49 s         Yes            
Heap Sort                40.99 s        Yes            
Merge Sort               13.67 s        Yes            
Quick Sort               9.77 s         Yes            
Radix Sort b10           9.05 s         Yes            
Radix Sort b16           3.43 s         Yes            
Shell Sort               0 ms           No             
---------------------------------------------
```