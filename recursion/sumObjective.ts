function sumObjective(nums: number[], target: number): number[][] {
  let results: number[][] = []
  
  function backtrack(path: number[], index: number, sum: number) {
    console.log(path)
    if(sum == target) {
      results.push([...path]);
      return
    }
    
    if(sum > target) return
    
    for(let i = index; i < nums.length; i++) {
      const option = nums[i];
      path.push(option);
      backtrack(path, i + 1, sum + option);
      path.pop()
    }
  }
  
  backtrack([], 0, 0);
  
  return results;
}

sumObjective([2, 3, 6, 7], 9)
