/**
 * Given inorder and postorder traversal of a tree, construct the binary tree.
 * Note:
 * You may assume that duplicates do not exist in the tree.
 */
 
 /**
 * Definition for binary tree
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode(int x) { val = x; }
 * }
 */
 
public class Solution {
    public TreeNode buildTree(int[] inorder, int[] postorder) {
        if(postorder.length == 0 || postorder.length != inorder.length)
            return null;
        return buildTree(postorder, 0, postorder.length - 1, inorder, 0, inorder.length - 1);
    }
    
    public TreeNode buildTree(int[] post, int start1, int end1, int[] in, int start2, int end2){
        if(start1 > end1 || start2 > end2)
            return null;
        int val = post[end1];
        int offset = start2;
        TreeNode cur = new TreeNode(val);
        // search for the inorder index
        for(; offset < end2; offset++){
            if(in[offset] == val)
                break;
        }
        cur.left = buildTree(post, start1, start1 + offset - start2 - 1, in, start2, offset - 1);
        cur.right = buildTree(post, start1 + offset - start2, end1 - 1, in, offset + 1, end2);
        return cur;
    }
}