class Solution {
    public boolean hasDuplicate(int[] nums) {
        Set<Integer> a = new HashSet<>();
        for (int i : nums){
            if (a.contains(i)){
                return true;
            }
            else{
                a.add(i);
            }
        }
        return false;
    }
}