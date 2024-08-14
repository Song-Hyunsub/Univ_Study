def solution(todo_list, finished):
    # 아직 완료되지 않은 일들을 담을 리스트 초기화
    incomplete_tasks = []

    # todo_list와 finished를 동시에 순회
    for task, is_finished in zip(todo_list, finished):
        # 완료되지 않은 경우 리스트에 추가
        if not is_finished:
            incomplete_tasks.append(task)
    
    return incomplete_tasks