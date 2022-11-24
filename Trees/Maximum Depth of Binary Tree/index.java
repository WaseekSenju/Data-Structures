// /**
//  * Definition for a binary tree node.
//  * public class TreeNode {
//  *     int val;
//  *     TreeNode left;
//  *     TreeNode right;
//  *     TreeNode() {}
//  *     TreeNode(int val) { this.val = val; }
//  *     TreeNode(int val, TreeNode left, TreeNode right) {
//  *         this.val = val;
//  *         this.left = left;
//  *         this.right = right;
//  *     }
//  * }
//  */
// class Solution {


//     public int maxDepth(TreeNode root){
//         if(root == null){
//             return 0;
//         }

//         int leftSubTree = maxDepth(root.left);
//         int rightSubTree = maxDepth(root.right);

//         return Math.max(leftSubTree,rightSubTree) + 1 ;

//     }
// }


//this problem is really intiative initself the lien 27 is the key role and for leaf nodes it returns 1 to the calling funtion
// its a bottom up approach