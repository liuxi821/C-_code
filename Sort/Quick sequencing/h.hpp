int GetMidIdx(int *array, int left, int right)
{
	int mid = left + ((right - left) >> 1);
	if (array[left] < array[right - 1])
	{
		if (array[left]>array[mid])
			return left;
		else if (array[right - 1] < array[mid])
			return right - 1;
		return mid;
	}
	else /*if (array[left]>array[right - 1])*/
	{
		if (array[mid] > array[left])
			return left;
		else if (array[mid] < array[right - 1])
			return right - 1;
		else
			return mid;
	}
}


//三数取中
int GetMidData(int *array, int left, int right)
{
	int mid = left + ((right - left) >> 1);
	if (array[left] < array[right - 1])
	{
		if (array[left]>array[mid])
			return array[left];
		else if (array[right - 1] < array[mid])
			return array[right - 1];
		return array[mid];
	}
	else /*if (array[left]>array[right - 1])*/
	{
		if (array[mid] > array[left])
			return array[left];
		else if (array[mid] < array[right - 1])
			return array[right - 1];
		else
			return array[mid];
	}
}
