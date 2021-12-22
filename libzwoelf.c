#define _GNU_SOURCE

#include <signal.h>
#include <ucontext.h>
#include <stddef.h>

static void signalHandler(int signo, siginfo_t *si, void *v_context) {
    ucontext_t *context = v_context;
    context->uc_mcontext.gregs[REG_RIP]++;
}

void initZwoelf() {
    struct sigaction act = {0};
    act.sa_flags = SA_SIGINFO;
    act.sa_sigaction = signalHandler;

    sigaction(SIGSEGV, &act, NULL);
    sigaction(SIGILL, &act, NULL);
}
