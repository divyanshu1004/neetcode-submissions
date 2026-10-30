class Solution {
    public int[] replaceElements(int[] arr) {
        int maxSoFar = -1;
        
        for (int i = arr.length - 1; i >= 0; i--) {
            int currentElement = arr[i];
            arr[i] = maxSoFar;
            maxSoFar = Math.max(maxSoFar, currentElement);
        }
        
        return arr;
    }
}
