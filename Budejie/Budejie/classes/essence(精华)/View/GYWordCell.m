//
//  GYWordCell.m
//  Budejie
//
//  Created by YOUNG on 16/8/4.
//  Copyright © 2016年 Young. All rights reserved.
//

#import "GYWordCell.h"

@implementation GYWordCell

-(instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier{
    if (self = [super initWithStyle:style reuseIdentifier:reuseIdentifier]) {
       //center
       self.backgroundColor = [UIColor cyanColor];
    }
    return self;
}


-(void)layoutSubviews{
    [super layoutSubviews];
    //frame
}


-(void)setModel:(GYTopicModel *)model{
     [super setModel:model];
    //model
    
}
@end
