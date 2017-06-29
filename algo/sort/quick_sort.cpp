/*
 * Partition the array or list of elements into two group using pivot.
 *  Pivot is last element in sub array. 
 *  int Parititioning:
 *  Now compare all the elements in array with pivot, swap them all 
 *  if they are smaller(for increaing order) or greater(decreasing order).

 *  algorithm quicksort(A, lo, hi) is
    if lo < hi then
        p := partition(A, lo, hi)
        quicksort(A, lo, p)
        quicksort(A, p + 1, hi)

	algorithm partition(A, lo, hi) is
		pivot := A[lo]
		i := lo - 1
		j := hi + 1
		loop forever
			do
				i := i + 1
			while A[i] < pivot

			do
				j := j - 1
			while A[j] > pivot

			if i >= j then
				return j

			swap A[i] with A[j]
 
 */
