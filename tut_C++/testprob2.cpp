// #include <stack>
// #include <unordered_set>
// // #include <cstddef>

// bool isBalanced (const std::string& parentheses)
//     std::stack<char> stack;
//     std::unordered_set<char> opening = {'(', '[', '{' };
//     std::unordered_set<char> closing = { ')', ']', '}'};
//     std::unordered_map<char, char> pairs =
// ｛
// ｛'）'、'（'｝，
// ｛'''｝，
// 工
// for (char c : parentheses)
// if (opening.contains(c))
// {
// stack. push (c) ;
// ｝
// else if (closing.contains (c))
// if (stack.empty) || stack.top() != pairs[c])
// {
// return false;
// ｝
// stack.pop ();
// }
// return stack.empty();