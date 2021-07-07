Question:
</br>
        Link: https://www.hackerrank.com/challenges/balanced-brackets/problem?h_r=internal-search
        </br>
Answer:
</br>
        - Here we use stacks to first store the opening brackets and then compare the last added bracket with the closing brakcets being added.
        </br>
        - We keep poping out the brackets from the stack which are balanced i,e they find their opposite pair in sequence
        </br>
        - If in the end we are able to make the stack empty then the string has balanced brackets