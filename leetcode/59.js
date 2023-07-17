function generateMatrix(n) {
  const matrix = [];
  for (let i = 0; i < n; i++) {
    matrix.push(new Array(n));
  }

  let top = 0,
    bottom = n - 1;
  let left = 0,
    right = n - 1;
  let num = 1;

  while (top <= bottom && left <= right) {
    // 上边
    for (let i = left; i <= right; i++) {
      matrix[top][i] = num++;
    }
    top++;

    // 右边
    for (let i = top; i <= bottom; i++) {
      matrix[i][right] = num++;
    }
    right--;

    // 下边
    if (top <= bottom) {
      for (let i = right; i >= left; i--) {
        matrix[bottom][i] = num++;
      }
      bottom--;
    }

    // 左边
    if (left <= right) {
      for (let i = bottom; i >= top; i--) {
        matrix[i][left] = num++;
      }
      left++;
    }
  }

  return matrix;
}

function printMatrix(matrix) {
  for (let i = 0; i < matrix.length; i++) {
    console.log(matrix[i].join(" "));
  }
}

const n = 4;
const matrix = generateMatrix(n);

console.log("生成的螺旋矩阵为：");
printMatrix(matrix);
