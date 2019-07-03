#!/bin/bash
set -o errexit -o nounset -o pipefail
command -v shellcheck > /dev/null && shellcheck "$0"

case "$AMCL_LANG" in
  cpp)
    ./scripts/travis_cpp.sh
    ;;
  js)
    ./scripts/travis_js.sh
    ;;
  rust)
    ./scripts/travis_rust.sh
    ;;
  *)
    echo "Unknown value for AMCL_LANG"
    exit 1
esac