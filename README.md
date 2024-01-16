# Case expression in tree-sitter

## Desired syntax

```
case x of
  | True -> False
  | False -> True
```

## How to run

```
$ tree-sitter generate
$ tree-sitter tes
```

```
    (source_file
      (ERROR
        (simple_expression
          (identifier))
        (ERROR
          (constructor)
          (constructor))
        (constructor)
        (constructor)))

```
