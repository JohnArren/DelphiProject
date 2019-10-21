object DataModule3: TDataModule3
  OldCreateOrder = False
  Left = 425
  Top = 191
  Height = 429
  Width = 293
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;Data Source=database.mdb;Persis' +
      't Security Info=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 104
    Top = 16
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1057#1086#1090#1088#1091#1076#1085#1080#1082#1080
    Left = 16
    Top = 80
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 80
    Top = 80
  end
  object ADOQuery1: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 144
    Top = 80
  end
  object ADOQuery2: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    Left = 144
    Top = 144
  end
  object ADOTable2: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = #1045#1078#1077#1076#1085#1077#1074#1085#1080#1082
    Left = 16
    Top = 144
  end
  object DataSource2: TDataSource
    DataSet = ADOTable2
    Left = 80
    Top = 144
  end
  object DataSource3: TDataSource
    DataSet = ADOQuery1
    Left = 208
    Top = 80
  end
  object DataSource4: TDataSource
    DataSet = ADOQuery2
    Left = 208
    Top = 144
  end
  object ADODataSet1: TADODataSet
    Connection = ADOConnection1
    CursorType = ctStatic
    CommandText = 'SELECT * FROM '#1045#1078#1077#1076#1085#1077#1074#1085#1080#1082' ORDER BY '#1050#1086#1075#1076#1072';'
    Parameters = <>
    Left = 16
    Top = 208
  end
  object DataSource5: TDataSource
    DataSet = ADODataSet1
    Left = 80
    Top = 208
  end
  object ADOQuery3: TADOQuery
    Connection = ADOConnection1
    Parameters = <>
    SQL.Strings = (
      '')
    Left = 144
    Top = 208
  end
  object DataSource6: TDataSource
    DataSet = ADOQuery3
    Left = 208
    Top = 208
  end
  object ADOQuery4: TADOQuery
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <>
    SQL.Strings = (
      
        'SELECT ['#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080']!['#1060#1072#1084#1080#1083#1080#1103'],['#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080']!['#1048#1084#1103'],['#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080']!['#1054 +
        #1090#1095#1077#1089#1090#1074#1086'] , '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080'.'#1050#1086#1076'_'#1057#1086#1090#1088#1091#1076#1085#1080#1082#1072'  FROM '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080';')
    Left = 144
    Top = 264
  end
  object DataSource7: TDataSource
    DataSet = ADOQuery4
    Left = 208
    Top = 264
  end
  object ADOQuery5: TADOQuery
    Connection = ADOConnection1
    CursorType = ctStatic
    Parameters = <
      item
        Name = 'a'
        Attributes = [paNullable]
        DataType = ftFixedChar
        NumericScale = 255
        Precision = 255
        Size = 510
        Value = Null
      end>
    SQL.Strings = (
      
        'SELECT '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080'.'#1050#1086#1076'_'#1057#1086#1090#1088#1091#1076#1085#1080#1082#1072', '#1045#1078#1077#1076#1085#1077#1074#1085#1080#1082'.'#1063#1090#1086', '#1045#1078#1077#1076#1085#1077#1074#1085#1080#1082'.'#1050#1086#1075 +
        #1076#1072', '#1057#1090#1072#1090#1091#1089'.'#1085#1072#1079#1074#1072#1085#1080#1077'_'#1089#1090#1072#1090#1091#1089#1072', '#1045#1078#1077#1076#1085#1077#1074#1085#1080#1082'.'#1050#1086#1076'_'#1057#1090#1072#1090#1091#1089#1072' FROM '#1057#1090#1072#1090#1091#1089' ' +
        'INNER JOIN ('#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080' INNER JOIN '#1045#1078#1077#1076#1085#1077#1074#1085#1080#1082' ON '#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080'.'#1050#1086#1076'_'#1057 +
        #1086#1090#1088#1091#1076#1085#1080#1082#1072' = '#1045#1078#1077#1076#1085#1077#1074#1085#1080#1082'.'#1050#1086#1076'_'#1057#1086#1090#1088#1091#1076#1085#1080#1082#1072') ON '#1057#1090#1072#1090#1091#1089'.'#1050#1086#1076'_'#1057#1090#1072#1090#1091#1089#1072' = '#1045 +
        #1078#1077#1076#1085#1077#1074#1085#1080#1082'.'#1050#1086#1076'_'#1057#1090#1072#1090#1091#1089#1072' WHERE((('#1057#1086#1090#1088#1091#1076#1085#1080#1082#1080'.'#1050#1086#1076'_'#1057#1086#1090#1088#1091#1076#1085#1080#1082#1072')=:a))')
    Left = 144
    Top = 328
  end
  object DataSource8: TDataSource
    DataSet = ADOQuery5
    Left = 208
    Top = 328
  end
end
