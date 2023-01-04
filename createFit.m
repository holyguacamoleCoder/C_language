function [fitresult, gof] = createFit(x, y)
%CREATEFIT(X,Y)
%  创建一个拟合。
%
%  要进行 '无标题拟合 1' 拟合的数据:
%      X 输入: x
%      Y 输出: y
%  输出:
%      fitresult: 表示拟合的拟合对象。
%      gof: 带有拟合优度信息的结构体。
%
%  另请参阅 FIT, CFIT, SFIT.

%  由 MATLAB 于 04-Jan-2023 18:49:46 自动生成


%% 拟合: '多项式拟合中国人口'。
[xData, yData] = prepareCurveData( x, y );

% 设置 fittype 和选项。
ft = fittype( 'poly1' );

% 对数据进行模型拟合。
[fitresult, gof] = fit( xData, yData, ft );

% 绘制数据拟合图。
figure( 'Name', '多项式拟合中国人口' );
h = plot( fitresult, xData, yData );
legend( h, '中国人口原始数据', '多项式拟合曲线', 'Location', 'SouthEast');
% 为坐标区加标签
xlabel( 'x' );
ylabel( 'y' );
grid on
end


