function firstRecurringElement(arr = []) {
  const seen = new Set();

  for (const element of arr) {
    if(seen.has(element)) {
      return element;
    }

    seen.add(element);
  }

  return undefined;
}


console.log(firstRecurringElement([1,2,3,3]))
