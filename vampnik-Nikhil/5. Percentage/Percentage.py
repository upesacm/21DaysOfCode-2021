if __name__ == '__main__':
    n = int(raw_input())
    student_marks = {}
    for _ in range(n):
        line = raw_input().split()
        name, scores = line[0], line[1:]
        scores = map(float, scores)
        student_marks[name] = scores
    query_name = raw_input()
    query_marks = float(sum(student_marks[query_name]))
    query_total = len(student_marks[query_name])
    percentage = (query_marks / query_total)
    print("{:.2f}".format(percentage))