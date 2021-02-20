#import <UIKit/UIKit.h>
#import "ZWPrizeModel.h"

// TODO: 补充类注释
@interface ZWPrizeTableViewCell : UITableViewCell
/**
 *  @author 刘云鹏
 *  @brief 左边的抽奖包含视图
 *
 */
@property (weak, nonatomic) IBOutlet UIView *leftPrizeContainView;
/**
 *  左边的抽奖图片
 */
@property (weak, nonatomic) IBOutlet UIImageView *leftPrzeImageView;
/**
 *  左边的抽奖抽奖说明
 */
@property (weak, nonatomic) IBOutlet UILabel *leftPrizeIntrodute;
/**
 *  左边的黑色底部view
 */
@property (weak, nonatomic) IBOutlet UIView *leftBlackView;
/**
 *  左边的抽奖开始时间
 */
@property (weak, nonatomic) IBOutlet UILabel *leftPrizeTime;
/**
 *  右边边的抽奖包含视图
 */
@property (weak, nonatomic) IBOutlet UIView *rightPrizeContainView;
/**
 *  右边的抽奖图片
 */
@property (weak, nonatomic) IBOutlet UIImageView *rightPrzeImageView;
/**
 *  右边的抽奖抽奖说明
 */
@property (weak, nonatomic) IBOutlet UILabel *rightPrizeIntrodute;
/**
 *  右边的抽奖开始时间
 */
@property (weak, nonatomic) IBOutlet UILabel *rightPrizeTime;
/**
 *  cell所在的section
 */
@property (strong, nonatomic) NSNumber  *cell_section;
/**
 *  右边边的黑色底部view
 */
@property (weak, nonatomic) IBOutlet UIView *rightBlackVIew;

/**
 *  cell所在的row
 */
@property (assign, nonatomic) NSNumber  *cell_row;
/**
 *  填充cell数据
 *  @param leftPrizeModel  左边数据
 *  @param rightPrizeModel 右边数据
 */
-(void)fillPrizeData:(ZWPrizeModel*)leftPrizeModel right:(ZWPrizeModel*)rightPrizeModel leftTag:(NSInteger) leftTag rightTag:(NSInteger)rightTag;


@end