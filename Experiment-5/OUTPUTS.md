# Outputs

## 1. IPC using Pipe (C)

### Compile

```bash
gcc ipc_pipe.c -o ipc
./ipc
```

### Sample Output

```
Message written to pipe: Hello from Parent Process
Message read from pipe: Hello from Parent Process
```

---

## 2. IPC using Pipe (Shell Script)

### Run

```bash
chmod +x ipc_pipe.sh
./ipc_pipe.sh
```

### Sample Output

```
Parent Process
Sending message through pipe...
Child Process
Received message successfully.
```

## Result

Thus, Inter Process Communication (IPC) using Pipe Mechanism was implemented successfully.
