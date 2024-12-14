#!/bin/bash

read -p "Enter your Action " action
# Case Opeartion Perform
# Here in case statements we use any thing like number. pattern or multi statements.
# case ${action} in
#     start)
#         echo "I'm Going to Start..."
#         ;;
#     stop)
#         echo "I'm Going to Stop..."
#         ;;
#     reload)
#         echo "I'm Going to Reload..."
#         ;;
#     restart)
#         echo "I'm Going to Restart..."
#         ;;
#     *)
#         echo "It's Default Value or Paramenter..."
# esac


# case ${action} in
#     start | START)
#         echo "I'm Going to Start..."
#         ;;
#     stop | STOP)
#         echo "I'm Going to Stop..."
#         ;;
#     reload | RELOAD)
#         echo "I'm Going to Reload..."
#         ;;
#     restart | RESTART)
#         echo "I'm Going to Restart..."
#         ;;
#     *)
#         echo "It's Default Value or Paramenter..."
# esac


case ${action} in
    [Yy] | [Yy][Ee][Ss])
        echo "I'm Going to Say Yes..."
        ;;
    [Nn] | [Nn][Oo])
        echo "I'm Going to Say No..."
        ;;
    *)
        echo "It's Default Value or Paramenter..."
esac