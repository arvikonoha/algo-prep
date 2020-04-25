
int maxima(int a[], int size)
{
  if (size < 3)
    return -1;
  int left = 0, right = size - 1, mid, maxfound = 0;
  while (left <= right)
  {
    mid = (left + right) / 2;
    if (a[mid] > a[mid - 1] && a[mid] > a[mid + 1])
    {
      maxfound = 1;
      break;
    }
    else if (a[mid] < a[mid + 1] && a[mid] > a[mid - 1])
    {
      left += 1;
    }
    else if (a[mid] < a[mid - 1] && a[mid + 1] < a[mid])
    {
      right -= 1;
    }
    else
      break;
  }
  if (maxfound)
    return mid;
  else
  {
    return -1;
  }
}