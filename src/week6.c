continue;
        }

        // ---------------- NORMAL COMMAND ----------------

        pid_t pid = fork();

        if (pid == 0) {

            execlp(input, input, NULL);

            perror("Command failed");
            exit(1);

        } else if (pid > 0) {

            wait(NULL);

        } else {

            perror("fork");
        }
    }

    return 0;
}
