# Outputs

## 1. Semaphore Implementation (C)

### Compile

```bash
gcc semaphore.c -o semaphore -pthread
./semaphore
```

### Sample Output

```
Parent Process Entering Critical Section
Parent Process Leaving Critical Section
Child Process Entering Critical Section
Child Process Leaving Critical Section
```

---

## 2. Semaphore Simulation (Shell Script)

### Run

```bash
chmod +x semaphore.sh
./semaphore.sh
```

### Output

```
Entering Critical Section
Leaving Critical Section
```

If another process runs simultaneously, it waits until the lock file is removed.

## Result

Thus, the Semaphore Implementation program was executed successfully and the output was verified.
