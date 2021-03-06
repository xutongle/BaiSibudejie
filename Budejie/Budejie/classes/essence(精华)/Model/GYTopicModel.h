//
//  GYTopicModel.h
//  Budejie
//
//  Created by YOUNG on 16/8/2.
//  Copyright © 2016年 Young. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GYTopicModel : NSObject

typedef NS_ENUM (NSInteger,TopicCellType){
    /** 全部 */
    TopicTypeAll = 1,
    /** 图片 */
    TopicTypePicture = 10,
    /** 段子 */
    TopicTypeWord = 29,
    /** 声音 */
    TopicTypeVoice = 31,
    /** 视频 */
    TopicTypeVideo = 41
};

@property(nonatomic,strong)NSString *maxtime;
/** 用户的名字 */
@property (nonatomic, copy) NSString *name;
/** 用户的头像 */
@property (nonatomic, copy) NSString *profile_image;
/** 帖子的文字内容 */
@property (nonatomic, copy) NSString *text;
/** 帖子审核通过的时间 */
@property (nonatomic, copy) NSString *passtime;

/** 顶数量 */
@property (nonatomic, assign) NSInteger ding;
/** 踩数量 */
@property (nonatomic, assign) NSInteger cai;
/** 转发\分享数量 */
@property (nonatomic, assign) NSInteger repost;
/** 评论数量 */
@property (nonatomic, assign) NSInteger comment;
/** 最热评论 */
@property (nonatomic, strong) NSArray *top_cmt;

/** 帖子的类型 10为图片 29为段子 31为音频 41为视频 */
@property (nonatomic, assign) NSInteger type;
/** 中间图片的width*/
@property (nonatomic, assign) NSInteger width;
/** 中间图片的height */
@property (nonatomic, assign) NSInteger height;

/** 小图 */
@property (nonatomic, copy) NSString *image0;
/** 中图 */
@property (nonatomic, copy) NSString *image2;
/** 大图 */
@property (nonatomic, copy) NSString *image1;
/** 是否是gif */
@property (nonatomic, assign) BOOL is_gif;
/** 音频时长 */
@property (nonatomic, assign) NSInteger voicetime;
/** 视频时长 */
@property (nonatomic, assign) NSInteger videotime;
/** 音频\视频的播放次数 */
@property (nonatomic, assign) NSInteger playcount;



//并非服务器返回的属性 而是为了方便计算
/** 中间图片的frame */
@property(nonatomic,assign)CGRect middleFrame;
/** cell高度属性 */
@property(nonatomic,assign)CGFloat cellHeight;
/** 是否是大图 */
@property (nonatomic, assign,getter=isBigPicture) BOOL bigPicture;








@end
