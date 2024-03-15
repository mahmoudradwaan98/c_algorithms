# Algorithms using C language


## Searching Algorithms

1- Linear search: search every element of the array till you find the required element

	time complexity : O(n)

2- Binary search: searches of the element by comparing it with a middle item of the sorted array
		   if a match occurs, the index is returned else searching is reduced to 
		   upper half or lower half of the array. 

	time complexity : O(log2n)

## Sorting Algorithms 

1- Bubble sort: works by swapping adjacent elements in repeated passes, if they are not in
		 correct order. High time complexity and not suitable for large datasets.

	time complexity : O(n^2)

2- Insertion sort: The array is split into sorted and unsorted parts. unsorted elements are 
		    picked and placed at their correct position in the sorted part.

	time complexity : O(n^2)

3- Selection sort: its appropriate position into an array, the array is selected in every pass 
		    and inserted the smallest value among unsorted elements of the array.

	time complexity : O(n^2)

4- Heap sort: uses the property of max and min heaps having the largest and smallest elements 
	       at the root level. it is an inplace sorting algorithms 

	time complexity : O(n * log2n)

5- Merge sort: repeatedly divide the array into half, sort the halves, and then combine them
		(divide and conquer algorithm)

	time complexity : O(n * logn)

6- Quick sort: pivot element is picked and partitions made around if are again recursively
	  	partitioned and sorted 
		(divide and conquer algorithm)

	time complexity : O(n * logn)
	Worst time complexity : O(n ^2)
