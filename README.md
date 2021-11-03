# hashmap

C 语言实现的 hashmap 库

## 使用说明

```c
// 初始化 hashmap
struct hashmap* map = hashmap_init();

// 插入或更新 key - value 对
put(map, key, value);

// 查询 value
int value = get(map, key)
```

## 泛型支持

- key
    - char*
    - char[]
- value
    - int
